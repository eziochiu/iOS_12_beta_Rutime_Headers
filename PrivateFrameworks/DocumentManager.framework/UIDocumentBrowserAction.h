/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface UIDocumentBrowserAction : NSObject <NSCopying, NSSecureCoding> {
    long long  _availability;
    NSPredicate * _filteringPredicate;
    NSString * _identifier;
    UIImage * _image;
    NSString * _localizedTitle;
    unsigned long long  _menuSortOrder;
    long long  _navigationSide;
    bool  _requiresResolvedItems;
    bool  _requiresVersioning;
    id /* block */  _resolvedHandler;
    long long  _style;
    NSArray * _supportedContentTypes;
    bool  _supportsMultipleItems;
    FPUIAction * _uiAction;
    NSString * _uiActionProviderIdentifier;
    id /* block */  _unresolvedHandler;
}

@property (nonatomic) long long availability;
@property (nonatomic, retain) NSPredicate *filteringPredicate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) unsigned long long menuSortOrder;
@property (nonatomic) long long navigationSide;
@property (nonatomic) bool requiresResolvedItems;
@property (nonatomic) bool requiresVersioning;
@property (nonatomic, copy) id /* block */ resolvedHandler;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSArray *supportedContentTypes;
@property (nonatomic) bool supportsMultipleItems;
@property (nonatomic, retain) FPUIAction *uiAction;
@property (nonatomic, copy) NSString *uiActionProviderIdentifier;
@property (nonatomic, copy) id /* block */ unresolvedHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)availability;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filteringPredicate;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 availability:(long long)arg3 handler:(id /* block */)arg4;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 resolvedHandler:(id /* block */)arg3;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 unresolvedHandler:(id /* block */)arg3;
- (id)initWithUIAction:(id)arg1;
- (id)localizedTitle;
- (unsigned long long)menuSortOrder;
- (long long)navigationSide;
- (bool)requiresResolvedItems;
- (bool)requiresVersioning;
- (id /* block */)resolvedHandler;
- (void)setAvailability:(long long)arg1;
- (void)setFilteringPredicate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMenuSortOrder:(unsigned long long)arg1;
- (void)setNavigationSide:(long long)arg1;
- (void)setRequiresResolvedItems:(bool)arg1;
- (void)setRequiresVersioning:(bool)arg1;
- (void)setResolvedHandler:(id /* block */)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSupportedContentTypes:(id)arg1;
- (void)setSupportsMultipleItems:(bool)arg1;
- (void)setUiAction:(id)arg1;
- (void)setUiActionProviderIdentifier:(id)arg1;
- (void)setUnresolvedHandler:(id /* block */)arg1;
- (long long)style;
- (id)supportedContentTypes;
- (bool)supportsMultipleItems;
- (id)uiAction;
- (id)uiActionProviderIdentifier;
- (id /* block */)unresolvedHandler;

@end
