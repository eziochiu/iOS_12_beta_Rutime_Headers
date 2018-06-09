/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVSuggestionRequest : NSObject {
    VNCanceller * _canceller;
    NSArray * _cflags;
    NSMutableDictionary * _clusterFlagByClusterId;
    NSArray * _csns;
    NSString * _requestId;
    long long  _type;
    id /* block */  _updateHandler;
}

@property (readonly) VNCanceller *canceller;
@property (readonly) NSArray *cflags;
@property (readonly) NSMutableDictionary *clusterFlagByClusterId;
@property (readonly) NSArray *csns;
@property (readonly) NSString *requestId;
@property (readonly) long long type;
@property (copy) id /* block */ updateHandler;

+ (id)requestWithFaceClusterIds:(id)arg1 clusterFlags:(id)arg2 updateHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)canceller;
- (id)cflags;
- (id)clusterFlagByClusterId;
- (id)csns;
- (id)initWithFaceClusterIds:(id)arg1 clusterFlags:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)requestId;
- (void)setUpdateHandler:(id /* block */)arg1;
- (long long)type;
- (id /* block */)updateHandler;

@end
