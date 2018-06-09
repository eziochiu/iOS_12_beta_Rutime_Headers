/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMMessageNotificationTimer : NSObject {
    NSDate * _date;
    NSNumber * _numberDingsLeft;
}

@property (nonatomic, readonly) bool areDingsRemaining;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) NSNumber *numberDingsLeft;

- (bool)areDingsRemaining;
- (id)date;
- (void)dealloc;
- (id)initWithDate:(id)arg1;
- (id)numberDingsLeft;
- (void)reduceNumberDingsLeft;
- (void)setDate:(id)arg1;

@end
