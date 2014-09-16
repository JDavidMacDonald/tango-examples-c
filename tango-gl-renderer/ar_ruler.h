/*
 * Copyright 2014 Google Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AR_RULER_H
#define AR_RULER_H

#include "drawable_object.h"
#include "gl_util.h"

class ArRuler : public DrawableObject {
 public:
  ArRuler();
  void Render(glm::mat4 projection_mat, glm::mat4 view_mat);
 private:
  GLuint vertex_buffer_;
  GLuint color_buffer_;

  GLuint shader_program_;
  GLuint attrib_vertices_;
  GLuint attrib_colors_;
  GLuint uniform_mvp_mat_;
};

#endif  // AR_RULER_H