/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface Theme : NSObject {
    NSString * m_themeID;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) UIImage *previewImage;
@property (nonatomic, readonly) NSString *themeID;
@property (nonatomic, readonly) NSString *trailerID;

+ (id)themeIDFromTrailerID:(id)arg1;
+ (bool)themeIDIsTrailer:(id)arg1;
+ (id)themeIDs;
+ (id)themeWithID:(id)arg1;
+ (id)trailerIDFromThemeID:(id)arg1;

- (void).cxx_destruct;
- (id)displayName;
- (id)displayNameForTransitionName:(id)arg1;
- (id)initWithThemeID:(id)arg1;
- (id)micaFileBaseName;
- (id)micaFileNameForCutawayName:(id)arg1 cutawayDirection:(int)arg2;
- (id)micaFileNameForTitleNamed:(id)arg1;
- (id)micaFileNameForTransitionName:(id)arg1 transitionDirection:(int)arg2;
- (id)musicName;
- (id)posterImage;
- (id)previewImage;
- (id)themeID;
- (id)trailerID;

@end
