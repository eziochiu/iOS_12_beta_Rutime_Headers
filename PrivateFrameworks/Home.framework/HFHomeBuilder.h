/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomeBuilder : HFItemBuilder {
    NSString * _name;
    NSString * _userNotes;
    HFWallpaperEditCollectionBuilder * _wallpaperBuilder;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *userNotes;
@property (nonatomic, retain) HFWallpaperEditCollectionBuilder *wallpaperBuilder;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)commitItem;
- (id)createHome;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)name;
- (id)performValidation;
- (void)setHome:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUserNotes:(id)arg1;
- (void)setWallpaperBuilder:(id)arg1;
- (id)updateName;
- (id)updateUserNotes;
- (id)userNotes;
- (id)wallpaperBuilder;

@end
