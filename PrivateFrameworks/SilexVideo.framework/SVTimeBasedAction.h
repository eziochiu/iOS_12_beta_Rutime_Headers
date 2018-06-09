/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVTimeBasedAction : NSObject {
    id /* block */  _block;
    double  _time;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) double time;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithTime:(double)arg1 block:(id /* block */)arg2;
- (double)time;

@end
