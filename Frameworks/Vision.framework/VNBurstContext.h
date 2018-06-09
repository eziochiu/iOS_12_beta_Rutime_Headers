/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNBurstContext : NSObject {
    BurstImageSetInternal * _burstSet;
}

@property (nonatomic, copy) id /* block */ loggingCallback;

- (void).cxx_destruct;
- (bool)addBurstFrameWithIdentifier:(id)arg1 fromImageBuffer:(id)arg2 withProperties:(id)arg3 error:(id*)arg4;
- (id)allClusters;
- (id)allImageIdentifiers;
- (id)allImageStats;
- (id)bestImageIdentifiers;
- (id)coverImageIdentifier;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (bool)isAction;
- (bool)isPortrait;
- (id /* block */)loggingCallback;
- (void)setLoggingCallback:(id /* block */)arg1;

@end