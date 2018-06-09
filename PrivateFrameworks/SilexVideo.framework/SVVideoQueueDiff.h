/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoQueueDiff : NSObject <SVVideoQueueDiff> {
    NSOrderedSet * _videosToInsert;
    NSOrderedSet * _videosToRemove;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSOrderedSet *videosToInsert;
@property (nonatomic, readonly) NSOrderedSet *videosToRemove;

- (void).cxx_destruct;
- (id)initWithVideosToInsert:(id)arg1 videosToRemove:(id)arg2;
- (id)videosToInsert;
- (id)videosToRemove;

@end
