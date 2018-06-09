/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKTimeLoggerLogPauseRecord : NSObject {
    NSString * _message;
    double  _time;
}

@property (nonatomic, retain) NSString *message;
@property (nonatomic) double time;

- (void).cxx_destruct;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setTime:(double)arg1;
- (double)time;

@end
