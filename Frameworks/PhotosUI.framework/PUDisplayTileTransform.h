/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDisplayTileTransform : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  __displaySize;
    double  __initialScale;
    struct CGSize { 
        double width; 
        double height; 
    }  __initialSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _affineTransform;
    bool  _hasUserInput;
    struct CGSize { 
        double width; 
        double height; 
    }  _transformPadding;
    NSString * _userInputOriginIdentifier;
}

@property (setter=_setDisplaySize:, nonatomic) struct CGSize { double x1; double x2; } _displaySize;
@property (setter=_setInitialScale:, nonatomic) double _initialScale;
@property (setter=_setInitialSize:, nonatomic) struct CGSize { double x1; double x2; } _initialSize;
@property (setter=_setAffineTransform:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } affineTransform;
@property (setter=_setHasUserInput:, nonatomic) bool hasUserInput;
@property (nonatomic, readonly) PUModelTileTransform *modelTileTransform;
@property (setter=_setTransformPadding:, nonatomic) struct CGSize { double x1; double x2; } transformPadding;
@property (setter=_setUserInputOriginIdentifier:, nonatomic, copy) NSString *userInputOriginIdentifier;

+ (id)displayTileTransformWithModelTileTransform:(id)arg1 initialScale:(double)arg2 initialSize:(struct CGSize { double x1; double x2; })arg3 displaySize:(struct CGSize { double x1; double x2; })arg4 secondaryDisplayTileTransform:(id)arg5;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_displaySize;
- (double)_initialScale;
- (struct CGSize { double x1; double x2; })_initialSize;
- (void)_setAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_setDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setHasUserInput:(bool)arg1;
- (void)_setInitialScale:(double)arg1;
- (void)_setInitialSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTransformPadding:(struct CGSize { double x1; double x2; })arg1;
- (void)_setUserInputOriginIdentifier:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasUserInput;
- (id)init;
- (id)modelTileTransform;
- (id)newDisplayTileTransformWithUserAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 userInputOriginIdentifier:(id)arg2;
- (struct CGSize { double x1; double x2; })transformPadding;
- (id)userInputOriginIdentifier;

@end
