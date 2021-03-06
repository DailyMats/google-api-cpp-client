// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Cloud Pub/Sub API (pubsub/v1)
// Generated from:
//   Version: v1
//   Revision: 20181226
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.5
#ifndef  GOOGLE_PUBSUB_API_SEEK_RESPONSE_H_
#define  GOOGLE_PUBSUB_API_SEEK_RESPONSE_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_pubsub_api {
using namespace googleapis;

/**
 * Response for the `Seek` method (this response is empty).
 *
 * @ingroup DataObject
 */
class SeekResponse : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static SeekResponse* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SeekResponse(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SeekResponse(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~SeekResponse();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_pubsub_api::SeekResponse</code>
   */
  const char* GetTypeName() const {
    return "google_pubsub_api::SeekResponse";
  }

 private:
  void operator=(const SeekResponse&);
};  // SeekResponse
}  // namespace google_pubsub_api
#endif  // GOOGLE_PUBSUB_API_SEEK_RESPONSE_H_
