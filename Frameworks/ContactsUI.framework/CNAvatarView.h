/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarView : UIControl <CNAvatarCardControllerDelegate, CNCardTransitioning, CNContactChangesObserver> {
    bool  _allowsAnimation;
    bool  _asynchronousRendering;
    bool  _autoUpdateContact;
    CNAvatarCardController * _cardController;
    CNContactStore * _contactStore;
    UINavigationController * _contactViewNavigationController;
    NSArray * _contacts;
    <CNAvatarViewDelegate> * _delegate;
    bool  _disableCornerRadiusForAvatar;
    UIView * _forcePressView;
    NSArray * _likenessProviders;
    <CNUIPRLikenessResolver> * _likenessResolver;
    NSArray * _likenessViews;
    NSString * _message;
    long long  _monogrammerStyle;
    NSString * _name;
    UIImage * _overrideImage;
    PRLikeness * _overridePRLikeness;
    PRPersonaStore * _personaStore;
    bool  _prohibitsPersonaFetch;
    bool  _registeredContactAction;
    bool  _registeredInNotifier;
    <CNCancelable> * _resolverToken;
    bool  _showsActionsOnForcePress;
    bool  _showsActionsOnTap;
    bool  _showsContactOnTap;
    bool  _threeDTouchEnabled;
}

@property (nonatomic, readonly) UIColor *accentColor;
@property (nonatomic, copy) NSArray *actionCategories;
@property (nonatomic) bool allowsAnimation;
@property (nonatomic) bool asynchronousRendering;
@property (nonatomic) bool autoUpdateContact;
@property (nonatomic) bool bypassActionValidation;
@property (nonatomic, retain) CNAvatarCardController *cardController;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, retain) UINavigationController *contactViewNavigationController;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, readonly) UIImage *contentImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentImageFrame;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAvatarViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableCornerRadiusForAvatar;
@property (nonatomic) UIView *forcePressView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *likenessProviders;
@property (nonatomic, retain) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic, copy) NSArray *likenessViews;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) long long monogrammerStyle;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) UIImage *overrideImage;
@property (nonatomic, retain) PRLikeness *overridePRLikeness;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (nonatomic) bool prohibitsPersonaFetch;
@property bool registeredContactAction;
@property bool registeredInNotifier;
@property (nonatomic, retain) <CNCancelable> *resolverToken;
@property (nonatomic) bool showsActionsOnForcePress;
@property (nonatomic) bool showsActionsOnTap;
@property (nonatomic) bool showsContactOnTap;
@property (readonly) Class superclass;
@property (getter=isThreeDTouchEnabled, nonatomic) bool threeDTouchEnabled;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitioningContentFrame;
@property (nonatomic, readonly) UIView *transitioningContentView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitioningFrame;
@property (nonatomic, readonly) UIImage *transitioningImage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitioningImageFrame;
@property bool transitioningImageVisible;
@property (nonatomic, readonly) UIView *transitioningView;

+ (bool)defaultThreeDTouchSupport;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(bool)arg1;

- (void).cxx_destruct;
- (double)_diameter;
- (void)_resolveContactLikenesses;
- (void)_updateCardActions;
- (void)_updateRegistration;
- (id)accentColor;
- (id)actionCategories;
- (bool)allowsAnimation;
- (bool)asynchronousRendering;
- (bool)autoUpdateContact;
- (id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (long long)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)avatarCardController:(id)arg1 shouldShowContact:(id)arg2;
- (void)avatarCardController:(id)arg1 willShowActions:(id)arg2;
- (void)avatarCardControllerDidDismiss:(id)arg1;
- (void)avatarCardControllerWillDismiss:(id)arg1;
- (bool)bypassActionValidation;
- (id)cardController;
- (id)contact;
- (void)contactDidChange;
- (void)contactDidChange:(id)arg1;
- (id)contactStore;
- (id)contactViewNavigationController;
- (id)contacts;
- (id)contentImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentImageFrame;
- (void)dealloc;
- (id)delegate;
- (id)descriptorForRequiredKeys;
- (void)didMoveToWindow;
- (bool)disableCornerRadiusForAvatar;
- (void)dismissContactViewController:(id)arg1;
- (id)forcePressView;
- (id)imageForTransitioningToFullScreen;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLikenessResolver:(id)arg1 threeDTouchEnabled:(bool)arg2;
- (id)initWithSettings:(id)arg1;
- (bool)isThreeDTouchEnabled;
- (void)layoutSubviews;
- (id)likenessProviders;
- (id)likenessResolver;
- (id)likenessViews;
- (id)message;
- (long long)monogrammerStyle;
- (id)name;
- (id)overrideImage;
- (id)overridePRLikeness;
- (id)personaStore;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (bool)prohibitsPersonaFetch;
- (bool)registeredContactAction;
- (bool)registeredInNotifier;
- (id)resolverToken;
- (void)setActionCategories:(id)arg1;
- (void)setAllowsAnimation:(bool)arg1;
- (void)setAsynchronousRendering:(bool)arg1;
- (void)setAutoUpdateContact:(bool)arg1;
- (void)setBypassActionValidation:(bool)arg1;
- (void)setCardController:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactViewNavigationController:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableCornerRadiusForAvatar:(bool)arg1;
- (void)setForcePressView:(id)arg1;
- (void)setLikenessProviders:(id)arg1;
- (void)setLikenessResolver:(id)arg1;
- (void)setLikenessViews:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMonogrammerStyle:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setOverrideImage:(id)arg1;
- (void)setOverridePRLikeness:(id)arg1;
- (void)setOverridePRLikeness:(id)arg1 reload:(bool)arg2;
- (void)setProhibitsPersonaFetch:(bool)arg1;
- (void)setRegisteredContactAction:(bool)arg1;
- (void)setRegisteredInNotifier:(bool)arg1;
- (void)setResolverToken:(id)arg1;
- (void)setShowsActionsOnForcePress:(bool)arg1;
- (void)setShowsActionsOnTap:(bool)arg1;
- (void)setShowsContactOnTap:(bool)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (void)setTransitioningImageVisible:(bool)arg1;
- (void)setupAvatarCardControllerIfNeeded;
- (void)setupSubviews;
- (void)showContact:(id)arg1;
- (bool)showsActionsOnForcePress;
- (bool)showsActionsOnTap;
- (bool)showsContactOnTap;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningFrame;
- (id)transitioningImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningImageFrame;
- (bool)transitioningImageVisible;
- (id)transitioningView;
- (void)updateLikenessViewsWithCurrentSize;

@end
