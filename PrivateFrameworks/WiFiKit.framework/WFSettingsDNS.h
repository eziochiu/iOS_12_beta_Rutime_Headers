/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFSettingsDNS : NSObject <WFSettingsPersistable> {
    NSDictionary * _items;
    NSArray * _searchDomains;
    NSArray * _serverAddresses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *items;
@property (nonatomic, retain) NSArray *searchDomains;
@property (nonatomic, retain) NSArray *serverAddresses;
@property (readonly) Class superclass;

+ (id)automaticConfig;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithServerAddresses:(id)arg1 searchDomains:(id)arg2;
- (id)items;
- (id)protocol;
- (id)searchDomains;
- (id)serverAddresses;
- (void)setItems:(id)arg1;
- (void)setSearchDomains:(id)arg1;
- (void)setServerAddresses:(id)arg1;

@end
