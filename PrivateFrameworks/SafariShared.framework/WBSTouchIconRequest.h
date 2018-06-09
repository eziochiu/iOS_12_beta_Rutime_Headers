/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTouchIconRequest : WBSSiteMetadataRequest <WBSIconRequest> {
    bool  _iconDownloadingEnabled;
    bool  _iconGenerationEnabled;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumIconSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumIconSize;
    NSString * _monogramTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIconDownloadingEnabled, nonatomic, readonly) bool iconDownloadingEnabled;
@property (getter=isIconGenerationEnabled, nonatomic, readonly) bool iconGenerationEnabled;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumIconSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumIconSize;
@property (nonatomic, readonly, copy) NSString *monogramTitle;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeForDrawing;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4 iconGenerationEnabled:(bool)arg5;
+ (id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4 iconGenerationEnabled:(bool)arg5 iconDownloadingEnabled:(bool)arg6;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4 iconGenerationEnabled:(bool)arg5;
- (id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { double x1; double x2; })arg3 maximumIconSize:(struct CGSize { double x1; double x2; })arg4 iconGenerationEnabled:(bool)arg5 iconDownloadingEnabled:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isIconDownloadingEnabled;
- (bool)isIconGenerationEnabled;
- (struct CGSize { double x1; double x2; })maximumIconSize;
- (struct CGSize { double x1; double x2; })minimumIconSize;
- (id)monogramTitle;
- (struct CGSize { double x1; double x2; })sizeForDrawing;
- (id)uniqueIdentifier;

@end
