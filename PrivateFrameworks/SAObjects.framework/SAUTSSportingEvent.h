/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUTSSportingEvent : SAUTSContent

@property (nonatomic, copy) NSURL *sportingEventId;

+ (id)sportingEvent;
+ (id)sportingEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSportingEventId:(id)arg1;
- (id)sportingEventId;

@end
