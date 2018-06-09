/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMacArchivedUILayout : TSPObject {
    KNMacUILayout * _uiLayout;
}

@property (nonatomic, readonly) KNMacUILayout *uiLayout;

- (void).cxx_destruct;
- (id)initWithUILayout:(id)arg1 context:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)uiLayout;

@end
