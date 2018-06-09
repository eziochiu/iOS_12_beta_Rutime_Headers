/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPFutureInvalidationToken : NSObject <MPInvalidationFutureToken, NSCopying> {
    MPInvalidationFuture * _future;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPInvalidationFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)future;
- (void)setFuture:(id)arg1;

@end
