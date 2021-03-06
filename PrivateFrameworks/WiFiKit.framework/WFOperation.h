/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFOperation : NSOperation {
    NSError * _error;
    bool  _finished;
    NSDate * _start;
}

@property (nonatomic, copy) NSError *error;

- (void).cxx_destruct;
- (id)error;
- (void)finish;
- (bool)isFinished;
- (bool)isReady;
- (id)name;
- (void)setError:(id)arg1;
- (void)start;

@end
