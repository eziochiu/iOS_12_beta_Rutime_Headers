/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPNowPlayingQueuePosition : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long index;
@property (nonatomic) long long queueSize;
@property (readonly) Class superclass;

+ (id)nowPlayingQueuePosition;
+ (id)nowPlayingQueuePositionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)index;
- (long long)queueSize;
- (void)setIndex:(long long)arg1;
- (void)setQueueSize:(long long)arg1;

@end
