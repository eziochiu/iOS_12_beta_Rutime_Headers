/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchToken : NSObject {
    UIImage * _image;
    <NSObject> * _representedObject;
    NSString * _text;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) <NSObject> *representedObject;
@property (nonatomic, copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)tokenWithIcon:(id)arg1 text:(id)arg2;
+ (id)tokenWithImage:(id)arg1;

- (void).cxx_destruct;
- (id)_initToken;
- (id)_makeAtomView;
- (id)image;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1 text:(id)arg2 image:(id)arg3;
- (id)representedObject;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_imageForSearchUserCategory:(unsigned long long)arg1 useSearchFieldStyle:(bool)arg2;

@end
