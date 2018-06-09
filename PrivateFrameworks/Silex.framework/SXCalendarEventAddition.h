/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXCalendarEventAddition : SXAddition

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *endDate;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) SXFormattedText *notes;
@property (nonatomic, readonly) NSString *startDate;
@property (nonatomic, readonly) NSString *title;

+ (id)typeString;

- (id)URLWithValue:(id)arg1 withType:(int)arg2;
- (id)notesWithValue:(id)arg1 withType:(int)arg2;

@end
