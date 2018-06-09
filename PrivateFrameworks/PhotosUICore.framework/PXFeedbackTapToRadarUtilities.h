/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackTapToRadarUtilities : NSObject

+ (id)_tempDirectoryURL;
+ (id)alertControllerWithPrivacyMessage:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)attachmentURLForDiagnosticDictionaries:(id)arg1 descriptionName:(id)arg2;
+ (id)captureScreenshot;
+ (void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 attachmentURLs:(id)arg8 includeSysDiagnose:(bool)arg9 completionHandler:(id /* block */)arg10;
+ (void)fileRadarWithTitle:(id)arg1 description:(id)arg2 classification:(id)arg3 componentID:(id)arg4 componentName:(id)arg5 componentVersion:(id)arg6 keyword:(id)arg7 screenshotURLs:(id)arg8 attachmentURLs:(id)arg9 includeSysDiagnose:(bool)arg10 includeInternalRelease:(bool)arg11 additionalExtensionIdentifiers:(id)arg12 completionHandler:(id /* block */)arg13;
+ (id)internalReleaseAgreement;
+ (void)presentTermsAndConditionsForUIViewController:(id)arg1 completion:(id /* block */)arg2;
+ (id)summaryDescription;

@end
