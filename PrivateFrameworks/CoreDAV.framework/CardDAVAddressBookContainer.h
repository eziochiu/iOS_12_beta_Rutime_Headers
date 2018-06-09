/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CardDAVAddressBookContainer : CoreDAVContainer {
    NSString * _maxImageSize;
    NSString * _maxResourceSize;
    NSURL * _meCardURL;
}

@property (nonatomic, readonly) bool isAddressBook;
@property (nonatomic, readonly) bool isSearchAddressBook;
@property (nonatomic, readonly) bool isSharedAddressBook;
@property (nonatomic, retain) NSString *maxImageSize;
@property (nonatomic, retain) NSString *maxResourceSize;
@property (nonatomic, retain) NSURL *meCardURL;

+ (id)copyPropertyMappingsForParser;

- (void).cxx_destruct;
- (void)applyParsedProperties:(id)arg1;
- (id)description;
- (bool)isAddressBook;
- (bool)isSearchAddressBook;
- (bool)isSharedAddressBook;
- (id)maxImageSize;
- (id)maxResourceSize;
- (id)meCardURL;
- (void)setMaxImageSize:(id)arg1;
- (void)setMaxResourceSize:(id)arg1;
- (void)setMeCardURL:(id)arg1;

@end