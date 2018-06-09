/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {
    NSMutableSet * _propertiesToExpand;
}

@property (nonatomic, retain) NSMutableSet *propertiesToExpand;

- (void).cxx_destruct;
- (void)addPropertyToExpandWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 expandedName:(id)arg3 expandedNameSpace:(id)arg4;
- (id)parseHints;
- (id)propertiesToExpand;
- (id)requestBody;
- (void)setPropertiesToExpand:(id)arg1;

@end
