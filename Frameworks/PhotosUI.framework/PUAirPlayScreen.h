/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAirPlayScreen : NSObject <PXSettingsKeyObserver> {
    UIWindow * __window;
    NSString * _identifier;
    UIViewController * _rootViewController;
    UIScreen * _screen;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *_typeName;
@property (setter=_setWindow:, nonatomic, retain) UIWindow *_window;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setIdentifier:, nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) unsigned long long placeholderType;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (setter=_setScreen:, nonatomic, retain) UIScreen *screen;
@property (setter=_setSize:, nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (setter=_setType:, nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (void)_setIdentifier:(id)arg1;
- (void)_setScreen:(id)arg1;
- (void)_setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setType:(unsigned long long)arg1;
- (void)_setWindow:(id)arg1;
- (id)_typeName;
- (void)_updateWindow;
- (id)_window;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithScreen:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAirPlayScreen:(id)arg1;
- (unsigned long long)placeholderType;
- (id)rootViewController;
- (id)screen;
- (void)setRootViewController:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)type;

@end
