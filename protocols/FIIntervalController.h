/* made by EzioChiu.
 */

@protocol FIIntervalController

@required

- (bool)allSlicesFinalized;
- (bool)intervalComplete;
- (NSDate *)intervalEndDate;

@end
