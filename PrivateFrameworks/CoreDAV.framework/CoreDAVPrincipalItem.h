/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPrincipalItem : CoreDAVItem {
    CoreDAVItemWithNoChildren * _all;
    CoreDAVItemWithNoChildren * _authenticated;
    CoreDAVHrefItem * _href;
    CoreDAVItem * _property;
    CoreDAVItemWithNoChildren * _selfItem;
    CoreDAVItemWithNoChildren * _unauthenticated;
}

@property (nonatomic, retain) CoreDAVItemWithNoChildren *all;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *authenticated;
@property (nonatomic, retain) CoreDAVHrefItem *href;
@property (nonatomic, retain) CoreDAVItem *property;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *selfItem;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)all;
- (id)authenticated;
- (id)description;
- (id)hashString;
- (id)href;
- (id)init;
- (id)initTypeIsAll;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsHREFWithURL:(id)arg1;
- (id)initTypeIsProperty:(id)arg1;
- (id)initTypeIsSelf;
- (id)initTypeIsUnauthenticated;
- (id)property;
- (id)selfItem;
- (void)setAll:(id)arg1;
- (void)setAuthenticated:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setSelfItem:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)unauthenticated;
- (void)write:(id)arg1;

@end
