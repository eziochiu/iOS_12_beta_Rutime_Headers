/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAutoupdatingRelativeDateFormatter : CKAutoupdatingDateFormatter

+ (id)relativeDateFormatter;
+ (id)relativeStringFromDate:(id)arg1;
+ (id)weekdayTemplateCharacters;

- (id)stringFromDate:(id)arg1;
- (id)stringFromDate:(id)arg1 isRelative:(bool*)arg2;

@end
