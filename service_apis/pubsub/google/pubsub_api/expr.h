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
#ifndef  GOOGLE_PUBSUB_API_EXPR_H_
#define  GOOGLE_PUBSUB_API_EXPR_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_pubsub_api {
using namespace googleapis;

/**
 * Represents an expression text. Example:
 * <dl>
 * <dt>title
 * <dd>"User account presence".
 * <dt>description
 * <dd>"Determines whether the request has a user account".
 * <dt>expression
 * <dd>"size(request.user) > 0".
 * </dl>
 *
 *
 * @ingroup DataObject
 */
class Expr : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Expr* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Expr(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Expr(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Expr();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_pubsub_api::Expr</code>
   */
  const char* GetTypeName() const {
    return "google_pubsub_api::Expr";
  }

  /**
   * Determine if the '<code>description</code>' attribute was set.
   *
   * @return true if the '<code>description</code>' attribute was set.
   */
  bool has_description() const {
    return Storage().isMember("description");
  }

  /**
   * Clears the '<code>description</code>' attribute.
   */
  void clear_description() {
    MutableStorage()->removeMember("description");
  }


  /**
   * Get the value of the '<code>description</code>' attribute.
   */
  const StringPiece get_description() const {
    const Json::Value& v = Storage("description");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>description</code>' attribute.
   *
   * An optional description of the expression. This is a longer text which
   * describes the expression, e.g. when hovered over it in a UI.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>expression</code>' attribute was set.
   *
   * @return true if the '<code>expression</code>' attribute was set.
   */
  bool has_expression() const {
    return Storage().isMember("expression");
  }

  /**
   * Clears the '<code>expression</code>' attribute.
   */
  void clear_expression() {
    MutableStorage()->removeMember("expression");
  }


  /**
   * Get the value of the '<code>expression</code>' attribute.
   */
  const StringPiece get_expression() const {
    const Json::Value& v = Storage("expression");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>expression</code>' attribute.
   *
   * Textual representation of an expression in
   * Common Expression Language syntax.
   *
   * The application context of the containing message determines which
   * well-known feature set of CEL is supported.
   *
   * @param[in] value The new value.
   */
  void set_expression(const StringPiece& value) {
    *MutableStorage("expression") = value.data();
  }

  /**
   * Determine if the '<code>location</code>' attribute was set.
   *
   * @return true if the '<code>location</code>' attribute was set.
   */
  bool has_location() const {
    return Storage().isMember("location");
  }

  /**
   * Clears the '<code>location</code>' attribute.
   */
  void clear_location() {
    MutableStorage()->removeMember("location");
  }


  /**
   * Get the value of the '<code>location</code>' attribute.
   */
  const StringPiece get_location() const {
    const Json::Value& v = Storage("location");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>location</code>' attribute.
   *
   * An optional string indicating the location of the expression for error
   * reporting, e.g. a file name and a position in the file.
   *
   * @param[in] value The new value.
   */
  void set_location(const StringPiece& value) {
    *MutableStorage("location") = value.data();
  }

  /**
   * Determine if the '<code>title</code>' attribute was set.
   *
   * @return true if the '<code>title</code>' attribute was set.
   */
  bool has_title() const {
    return Storage().isMember("title");
  }

  /**
   * Clears the '<code>title</code>' attribute.
   */
  void clear_title() {
    MutableStorage()->removeMember("title");
  }


  /**
   * Get the value of the '<code>title</code>' attribute.
   */
  const StringPiece get_title() const {
    const Json::Value& v = Storage("title");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>title</code>' attribute.
   *
   * An optional title for the expression, i.e. a short string describing
   * its purpose. This can be used e.g. in UIs which allow to enter the
   * expression.
   *
   * @param[in] value The new value.
   */
  void set_title(const StringPiece& value) {
    *MutableStorage("title") = value.data();
  }

 private:
  void operator=(const Expr&);
};  // Expr
}  // namespace google_pubsub_api
#endif  // GOOGLE_PUBSUB_API_EXPR_H_
