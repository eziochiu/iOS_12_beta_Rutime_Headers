/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMonogramImageLoader : NSObject <TVImageLoader> {
    NSDictionary * _generatorByType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)URLForObject:(id)arg1;
- (id)_imageLoadError;
- (void)cancelLoad:(id)arg1;
- (id)imageKeyForObject:(id)arg1;
- (id)init;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 completionHandler:(id /* block */)arg5;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* block */)arg6;

@end
