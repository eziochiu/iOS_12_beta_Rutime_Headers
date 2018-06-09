/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStoragePasteboardProxy : TSPObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    TSWPStorage * _storage;
    <TSWPStyleProvider> * _styleProvider;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } storageRange;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 storage:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 styleProvider:(id)arg4;
- (void)saveToArchiver:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })storageRange;

@end
