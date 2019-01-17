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
#ifndef  GOOGLE_PUBSUB_API_UPDATE_TOPIC_REQUEST_H_
#define  GOOGLE_PUBSUB_API_UPDATE_TOPIC_REQUEST_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/pubsub_api/topic.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_pubsub_api {
using namespace googleapis;

/**
 * Request for the UpdateTopic method.
 *
 * @ingroup DataObject
 */
class UpdateTopicRequest : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static UpdateTopicRequest* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit UpdateTopicRequest(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit UpdateTopicRequest(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~UpdateTopicRequest();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_pubsub_api::UpdateTopicRequest</code>
   */
  const char* GetTypeName() const {
    return "google_pubsub_api::UpdateTopicRequest";
  }

  /**
   * Determine if the '<code>topic</code>' attribute was set.
   *
   * @return true if the '<code>topic</code>' attribute was set.
   */
  bool has_topic() const {
    return Storage().isMember("topic");
  }

  /**
   * Clears the '<code>topic</code>' attribute.
   */
  void clear_topic() {
    MutableStorage()->removeMember("topic");
  }


  /**
   * Get a reference to the value of the '<code>topic</code>' attribute.
   */
  const Topic get_topic() const;

  /**
   * Gets a reference to a mutable value of the '<code>topic</code>' property.
   *
   * The updated topic object.
   *
   * @return The result can be modified to change the attribute value.
   */
  Topic mutable_topic();

  /**
   * Determine if the '<code>updateMask</code>' attribute was set.
   *
   * @return true if the '<code>updateMask</code>' attribute was set.
   */
  bool has_update_mask() const {
    return Storage().isMember("updateMask");
  }

  /**
   * Clears the '<code>updateMask</code>' attribute.
   */
  void clear_update_mask() {
    MutableStorage()->removeMember("updateMask");
  }


  /**
   * Get the value of the '<code>updateMask</code>' attribute.
   */
  const StringPiece get_update_mask() const {
    const Json::Value& v = Storage("updateMask");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>updateMask</code>' attribute.
   *
   * Indicates which fields in the provided topic to update. Must be specified
   * and non-empty. Note that if `update_mask` contains
   * "message_storage_policy" then the new value will be determined based on the
   * policy configured at the project or organization level. The
   * `message_storage_policy` must not be set in the `topic` provided above.
   *
   * @param[in] value The new value.
   */
  void set_update_mask(const StringPiece& value) {
    *MutableStorage("updateMask") = value.data();
  }

 private:
  void operator=(const UpdateTopicRequest&);
};  // UpdateTopicRequest
}  // namespace google_pubsub_api
#endif  // GOOGLE_PUBSUB_API_UPDATE_TOPIC_REQUEST_H_
