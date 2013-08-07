/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIAccountButtonsViewController, SKUIAccountButtonsComponent;

@interface SKUIAccountButtonsSection : SKUIStorePageSection <SKUIAccountButtonsDelegate> {
    SKUIAccountButtonsViewController *_accountButtonsViewController;
}

@property(readonly) SKUIAccountButtonsComponent * pageComponent;


- (id)cellForIndexPath:(id)arg1;
- (id)_accountButtonsViewController;
- (void)accountButtonsViewControllerDidSignOut:(id)arg1;
- (void)accountButtonsViewControllerDidSignIn:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (int)numberOfCells;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
