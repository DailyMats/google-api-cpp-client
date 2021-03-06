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
#ifndef  GOOGLE_PUBSUB_API_MODIFY_ACK_DEADLINE_REQUEST_H_
#define  GOOGLE_PUBSUB_API_MODIFY_ACK_DEADLINE_REQUEST_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_pubsub_api {
using namespace googleapis;

/**
 * Request for the ModifyAckDeadline method.
 *
 * @ingroup DataObject
 */
class ModifyAckDeadlineRequest : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ModifyAckDeadlineRequest* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ModifyAckDeadlineRequest(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ModifyAckDeadlineRequest(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ModifyAckDeadlineRequest();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_pubsub_api::ModifyAckDeadlineRequest</code>
   */
  const char* GetTypeName() const {
    return "google_pubsub_api::ModifyAckDeadlineRequest";
  }

  /**
   * Determine if the '<code>ackDeadlineSeconds</code>' attribute was set.
   *
   * @return true if the '<code>ackDeadlineSeconds</code>' attribute was set.
   */
  bool has_ack_deadline_seconds() const {
    return Storage().isMember("ackDeadlineSeconds");
  }

  /**
   * Clears the '<code>ackDeadlineSeconds</code>' attribute.
   */
  void clear_ack_deadline_seconds() {
    MutableStorage()->removeMember("ackDeadlineSeconds");
  }


  /**
   * Get the value of the '<code>ackDeadlineSeconds</code>' attribute.
   */
  int32 get_ack_deadline_seconds() const {
    const Json::Value& storage = Storage("ackDeadlineSeconds");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>ackDeadlineSeconds</code>' attribute.
   *
   * The new ack deadline with respect to the time this request was sent to
   * the Pub/Sub system. For example, if the value is 10, the new
   * ack deadline will expire 10 seconds after the `ModifyAckDeadline` call
   * was made. Specifying zero might immediately make the message available for
   * delivery to another subscriber client. This typically results in an
   * increase in the rate of message redeliveries (that is, duplicates).
   * The minimum deadline you can specify is 0 seconds.
   * The maximum deadline you can specify is 600 seconds (10 minutes).
   *
   * @param[in] value The new value.
   */
  void set_ack_deadline_seconds(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("ackDeadlineSeconds"));
  }

  /**
   * Determine if the '<code>ackIds</code>' attribute was set.
   *
   * @return true if the '<code>ackIds</code>' attribute was set.
   */
  bool has_ack_ids() const {
    return Storage().isMember("ackIds");
  }

  /**
   * Clears the '<code>ackIds</code>' attribute.
   */
  void clear_ack_ids() {
    MutableStorage()->removeMember("ackIds");
  }


  /**
   * Get a reference to the value of the '<code>ackIds</code>' attribute.
   */
  const client::JsonCppArray<string > get_ack_ids() const {
     const Json::Value& storage = Storage("ackIds");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>ackIds</code>' property.
   *
   * List of acknowledgment IDs.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_ackIds() {
    Json::Value* storage = MutableStorage("ackIds");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

 private:
  void operator=(const ModifyAckDeadlineRequest&);
};  // ModifyAckDeadlineRequest
}  // namespace google_pubsub_api
#endif  // GOOGLE_PUBSUB_API_MODIFY_ACK_DEADLINE_REQUEST_H_
