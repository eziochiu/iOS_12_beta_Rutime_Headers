/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCSearchContext : NSObject <NSSecureCoding> {
    bool  _isSearching;
    NSString * _searchString;
}

@property (nonatomic) bool isSearching;
@property (nonatomic, copy) NSString *searchString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSearching;
- (id)searchString;
- (void)setIsSearching:(bool)arg1;
- (void)setSearchString:(id)arg1;

@end
