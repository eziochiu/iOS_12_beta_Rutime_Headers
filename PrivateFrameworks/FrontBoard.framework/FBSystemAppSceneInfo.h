/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemAppSceneInfo : NSObject {
    _UICanvas * _canvas;
    UIWindow * _primaryWindow;
    FBSSceneImpl * _scene;
}

@property (nonatomic, retain) _UICanvas *canvas;
@property (nonatomic) UIWindow *primaryWindow;
@property (nonatomic, retain) FBSSceneImpl *scene;

- (void).cxx_destruct;
- (id)canvas;
- (void)dealloc;
- (id)primaryWindow;
- (id)scene;
- (void)setCanvas:(id)arg1;
- (void)setPrimaryWindow:(id)arg1;
- (void)setScene:(id)arg1;

@end
