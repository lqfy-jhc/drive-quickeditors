/*
 * Copyright 2022 Google LLC
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

/// @file FIRUserPropertyNames.h
///
/// Predefined user property names.
///
/// A UserProperty is an attribute that describes the app-user. By supplying UserProperties, you can
/// later analyze different behaviors of various segments of your userbase. You may supply up to 25
/// unique UserProperties per app, and you can use the name and value of your choosing for each one.
/// UserProperty names can be up to 24 characters long, may only contain alphanumeric characters and
/// underscores ("_"), and must start with an alphabetic character. UserProperty values can be up to
/// 36 characters long. The "firebase_" prefix is reserved and should not be used.

/// The method used to sign in. For example, "google", "facebook" or "twitter".
static NSString *const kFIRUserPropertySignUpMethod = @"sign_up_method";
