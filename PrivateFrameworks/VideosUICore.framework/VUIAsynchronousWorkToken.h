/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
 */

@interface VUIAsynchronousWorkToken : NSObject {
    NSOperation * _operation;
}

@property (nonatomic, retain) NSOperation *operation;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (id)initWithOperation:(id)arg1;
- (id)operation;
- (void)setOperation:(id)arg1;

@end
