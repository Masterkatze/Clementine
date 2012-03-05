/* This file is part of Clementine.
   Copyright 2012, David Sansome <me@davidsansome.com>
   
   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ADDPODCASTBYURL_H
#define ADDPODCASTBYURL_H

#include "addpodcastpage.h"

class AddPodcastPage;
class PodcastUrlLoader;
class PodcastUrlLoaderReply;
class Ui_AddPodcastByUrl;

class AddPodcastByUrl : public AddPodcastPage {
  Q_OBJECT
  
public:
  AddPodcastByUrl(Application* app, QWidget* parent = 0);
  ~AddPodcastByUrl();

private slots:
  void GoClicked();
  void RequestFinished(PodcastUrlLoaderReply* reply);

private:
  Ui_AddPodcastByUrl* ui_;
  PodcastUrlLoader* loader_;
};

#endif // ADDPODCASTBYURL_H
