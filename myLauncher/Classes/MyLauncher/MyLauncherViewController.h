//
//  MyLauncherViewController.h
//  @rigoneri
//  
//  Copyright 2010 Rodrigo Neri
//  Copyright 2011 David Jarrett
//  Copyright 2012 Nicolas Desjardins
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import "MyLauncherView.h"
#import "MyLauncherViewControllerItem.h"

@interface MyLauncherViewController : UIViewController <MyLauncherViewDelegate, UINavigationControllerDelegate> {
}

@property (nonatomic, strong) UINavigationController *launcherNavigationController;
@property (nonatomic, strong) MyLauncherView *launcherView;
@property (nonatomic, strong) NSMutableDictionary *appControllers;


-(BOOL)hasSavedLauncherItems;
-(void)clearSavedLauncherItems;

-(void)launcherViewItemSelected:(MyLauncherView*)item;
-(void)closeView;

-(void)launchSelectedItemViewController:(UIViewController*)itemViewController withTopTitle:(NSString*)title;

@end
