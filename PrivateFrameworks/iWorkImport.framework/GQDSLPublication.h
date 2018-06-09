/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDSLPublication : GQDRoot {
    bool  mHasBody;
    bool  mHasFooters;
    bool  mHasHeaders;
    bool  mIsOldTemplateNameMapInitialized;
    struct __CFDictionary { } * mOldTemplateNameMap;
    GQDSLPageMargins * mPageMargins;
    struct CGSize { 
        double width; 
        double height; 
    }  mPageSize;
    bool  mShowOutliner;
    GQDSStylesheet * mStylesheet;
}

+ (struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)appNamespace;

- (struct __CFString { }*)createFixedPathForOldAppBundleResourcePath:(struct __CFString { }*)arg1;
- (struct __CFArray { }*)createUpgradedPathComponentsFromOldTemplatePathComponents:(struct __CFArray { }*)arg1;
- (struct __CFString { }*)createUpgradedPathForOldAssetPath:(struct __CFString { }*)arg1;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2 fileUrl:(struct __CFURL { }*)arg3;
- (void)dealloc;
- (bool)hasBody;
- (bool)hasFooters;
- (bool)hasHeaders;
- (id)init;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL { }*)arg1;
- (id)pageMargins;
- (struct CGSize { double x1; double x2; })pageSize;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (void)setPageMargins:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (bool)showOutliner;
- (id)stylesheet;

@end
