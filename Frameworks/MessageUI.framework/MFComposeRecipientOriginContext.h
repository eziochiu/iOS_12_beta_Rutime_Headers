/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeRecipientOriginContext : NSObject {
    unsigned long long  _resultType;
    NSString * _searchTerm;
}

@property (nonatomic, readonly) unsigned long long resultType;
@property (nonatomic, readonly) NSString *searchTerm;

- (void)dealloc;
- (unsigned long long)resultType;
- (id)searchTerm;
- (void)setResultType:(unsigned long long)arg1;
- (void)setSearchTerm:(id)arg1;

@end
