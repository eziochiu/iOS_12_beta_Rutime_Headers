/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoStreamActivityAction : NSObject {
    id /* block */  _action;
    NSString * _title;
    NSString * _valueText;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *valueText;

- (void).cxx_destruct;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (void)setValueText:(id)arg1;
- (id)title;
- (id)valueText;

@end
