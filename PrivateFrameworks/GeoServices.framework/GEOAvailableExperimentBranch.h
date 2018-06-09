/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAvailableExperimentBranch : NSObject {
    NSMutableArray * _assignments;
    NSArray * _clientConfig;
    NSString * _experimentIdentifier;
    NSString * _label;
    NSString * _name;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (getter=_clientConfig, setter=_setClientConfig:, nonatomic, retain) NSArray *clientConfig;
@property (nonatomic, readonly) NSDictionary *clientConfigValues;
@property (getter=_dictionaryRepresentation, nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (void)_addAssignment:(id)arg1;
- (id)_clientConfig;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
- (void)_setClientConfig:(id)arg1;
- (id)clientConfigValues;
- (id)description;
- (id)initWithLabel:(id)arg1 name:(id)arg2 experimentIdentifier:(id)arg3;
- (bool)isActive;
- (id)label;
- (id)name;
- (id)querySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2;

@end
