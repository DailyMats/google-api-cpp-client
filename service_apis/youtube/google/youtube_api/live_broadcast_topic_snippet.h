// Copyright 2010 Google Inc.
//
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
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_TOPIC_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_TOPIC_SNIPPET_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class LiveBroadcastTopicSnippet : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LiveBroadcastTopicSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcastTopicSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcastTopicSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LiveBroadcastTopicSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LiveBroadcastTopicSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LiveBroadcastTopicSnippet");
  }

  /**
   * Determine if the '<code>name</code>' attribute was set.
   *
   * @return true if the '<code>name</code>' attribute was set.
   */
  bool has_name() const {
    return Storage().isMember("name");
  }

  /**
   * Clears the '<code>name</code>' attribute.
   */
  void clear_name() {
    MutableStorage()->removeMember("name");
  }


  /**
   * Get the value of the '<code>name</code>' attribute.
   */
  const StringPiece get_name() const {
    const Json::Value& v = Storage("name");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>name</code>' attribute.
   *
   * The name of the topic.
   *
   * @param[in] value The new value.
   */
  void set_name(const StringPiece& value) {
    *MutableStorage("name") = value.data();
  }

  /**
   * Determine if the '<code>releaseDate</code>' attribute was set.
   *
   * @return true if the '<code>releaseDate</code>' attribute was set.
   */
  bool has_release_date() const {
    return Storage().isMember("releaseDate");
  }

  /**
   * Clears the '<code>releaseDate</code>' attribute.
   */
  void clear_release_date() {
    MutableStorage()->removeMember("releaseDate");
  }


  /**
   * Get the value of the '<code>releaseDate</code>' attribute.
   */
  const StringPiece get_release_date() const {
    const Json::Value& v = Storage("releaseDate");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>releaseDate</code>' attribute.
   *
   * The date at which the topic was released. Filled for types: videoGame.
   *
   * @param[in] value The new value.
   */
  void set_release_date(const StringPiece& value) {
    *MutableStorage("releaseDate") = value.data();
  }

 private:
  void operator=(const LiveBroadcastTopicSnippet&);
};  // LiveBroadcastTopicSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LIVE_BROADCAST_TOPIC_SNIPPET_H_