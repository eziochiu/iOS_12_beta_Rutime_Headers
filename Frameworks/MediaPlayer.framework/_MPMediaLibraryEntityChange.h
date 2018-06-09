/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPMediaLibraryEntityChange : NSObject {
    NSString * _anchor;
    int  _deletionType;
    MPMediaEntity * _entity;
}

@property (nonatomic, readonly, copy) NSString *anchor;
@property (nonatomic, readonly) int deletionType;
@property (nonatomic, readonly) MPMediaEntity *entity;

- (void).cxx_destruct;
- (id)anchor;
- (int)deletionType;
- (id)entity;
- (id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(int)arg3;

@end
