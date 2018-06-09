/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICMarkupUtilities : NSObject

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (void)applyMarkupModelData:(id)arg1 attachment:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)applyReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(id /* block */)arg3;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (id)createMarkupViewController;
+ (id)createProcessingMarkupViewControllerOutWindow:(struct UIWindow {}**)arg1;
+ (void)embedReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)extractReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(id /* block */)arg3;
+ (bool)hasPrivateImageMetadata:(id)arg1;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 embedData:(bool)arg3;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageURL:(id)arg2;
+ (id)markupModelDataFromData:(id)arg1;
+ (id)markupModelDataFromDataAtURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)dataToEditForAttachment:(id)arg1 includeMarkupModelData:(bool)arg2;
+ (id)dataToEditForAttachment:(id)arg1 includeMarkupModelData:(bool)arg2 embedMarkupModelDataInImage:(bool)arg3;

@end
