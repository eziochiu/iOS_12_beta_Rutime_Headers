/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpItem : NSObject <NSCopying> {
    NSString * _decodedName;
    NSURL * _iconURL;
    NSString * _identifier;
    long long  _level;
    NSString * _name;
    HLPHelpItem * _parent;
    long long  _serverType;
}

@property (nonatomic, readonly) NSString *decodedName;
@property (nonatomic, copy) NSURL *iconURL;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long level;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) HLPHelpItem *parent;
@property (nonatomic) long long serverType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)decodedName;
- (id)iconURL;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2 serverType:(long long)arg3;
- (long long)level;
- (id)name;
- (id)parent;
- (long long)serverType;
- (void)setIconURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLevel:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setServerType:(long long)arg1;

@end
