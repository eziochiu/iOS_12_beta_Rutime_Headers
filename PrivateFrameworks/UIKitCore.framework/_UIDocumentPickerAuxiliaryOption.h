/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding> {
    id /* block */  _handler;
    NSString * _identifier;
    UIImage * _image;
    bool  _newlyAdded;
    unsigned long long  _order;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (getter=isNewlyAdded, nonatomic) bool newlyAdded;
@property (nonatomic) unsigned long long order;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)handler;
- (id)identifier;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isNewlyAdded;
- (unsigned long long)order;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setNewlyAdded:(bool)arg1;
- (void)setOrder:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
