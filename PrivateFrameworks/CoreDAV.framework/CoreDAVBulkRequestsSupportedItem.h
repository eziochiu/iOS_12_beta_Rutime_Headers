/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVBulkRequestsSupportedItem : CoreDAVItem {
    CoreDAVItem * _supported;
}

@property (nonatomic, retain) CoreDAVItem *supported;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)setSupported:(id)arg1;
- (id)supported;

@end
