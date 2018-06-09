/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTheme : NSObject {
    OADBaseStyles * mBaseStyles;
    OADDrawableDefaults * mDrawableDefaults;
    NSString * mName;
}

@property (nonatomic, retain) OADBaseStyles *baseStyles;
@property (nonatomic, readonly) OADDrawableDefaults *drawableDefaults;
@property (nonatomic, copy) NSString *name;

- (id)baseStyles;
- (void)dealloc;
- (id)description;
- (id)drawableDefaults;
- (id)init;
- (bool)isEmpty;
- (id)name;
- (void)setBaseStyles:(id)arg1;
- (void)setName:(id)arg1;
- (void)validateTheme;

@end
