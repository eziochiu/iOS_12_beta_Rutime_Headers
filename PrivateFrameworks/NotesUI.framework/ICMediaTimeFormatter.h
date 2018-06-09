/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICMediaTimeFormatter : NSDateComponentsFormatter

+ (id)timecodeFormatter;
+ (id)wordyFormatter;

- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;

@end
