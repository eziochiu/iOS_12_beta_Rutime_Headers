/* made by EzioChiu.
 */

@protocol _INPBSetTaskAttributeIntentResponse <NSObject>

@required

- (bool)hasModifiedTask;
- (_INPBTask *)modifiedTask;
- (void)setModifiedTask:(_INPBTask *)arg1;

@end
